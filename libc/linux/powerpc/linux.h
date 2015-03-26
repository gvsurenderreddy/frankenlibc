#define TCGETS 0x5401

#define LINUX_MAP_SHARED        0x01
#define LINUX_MAP_PRIVATE       0x02
#define LINUX_MAP_FIXED         0x10
#define LINUX_MAP_ANON          0x20
#define LINUX_MAP_STACK         0x20000
#define LINUX_MAP_HUGETLB       0x40000
#define LINUX_MAP_HUGE_SHIFT    26
#define LINUX_MAP_HUGE_64KB	(16 << LINUX_MAP_HUGE_SHIFT)
#define LINUX_MAP_HUGE(sz)      LINUX_MAP_HUGETLB | \
	( sz == 65536 ? LINUX_MAP_HUGE_64KB : 0 )

struct linux_stat {
	unsigned long long	st_dev;
	unsigned long long	st_ino;
	unsigned int		st_mode;
	unsigned int		st_nlink;
	unsigned int		st_uid;
	unsigned int		st_gid;
	unsigned long long	st_rdev;
	unsigned long long	__pad1;
	long long		st_size;
	int			st_blksize;
	int			__pad2;
	long long		st_blocks;
	int			st_atime;
	unsigned int		st_atime_nsec;
	int			st_mtime;
	unsigned int		st_mtime_nsec;
	int			st_ctime;
	unsigned int		st_ctime_nsec;
	unsigned int		__unused4;
	unsigned int		__unused5;
};