#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(void) {
	DIR *d;
	struct dirent *de;
	if (!(d = opendir("./"))) {
		perror("dr");
		return 1;
	}
	while ((de = readdir(d))) puts(de->d_name);
	closedir(d);
	return 0;
}
