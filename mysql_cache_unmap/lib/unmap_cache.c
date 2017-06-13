#define _XOPEN_SOURCE 600
#define _FILE_OFFSET_BITS 64
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int unmap_log(const char *fpath, size_t start, size_t len)
{
  int fd = open(fpath, O_RDONLY);
  if (fd < 0) {
    fprintf(stderr, "Failed to open %s\n", fpath);
    return 1;
  }
  int r = posix_fadvise(fd, start, len, POSIX_FADV_DONTNEED);
  if (r != 0) {
    fprintf(stderr, "posix_fadvice failed for %s\n", fpath);
  }
  close(fd);
  return 0;
}

int unmap_log_all(const char *fpath)
{
  return unmap_log(fpath, 0, 0);
}

int main(int argc, char* argv[]){
  if(argc == 1){
    fputs("no options\n", stderr);
    exit(1);
  }

  int i = 0, r = 0;
  for (i = 1; i < argc; i++){
    printf("unmap processing.. %s.. ", argv[i]);
    unmap_log_all(argv[i]) == 0 ? printf("ok\n") :  printf("fail\n");
  }
}
