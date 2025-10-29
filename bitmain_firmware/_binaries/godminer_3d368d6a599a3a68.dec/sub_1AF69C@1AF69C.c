int __fastcall sub_1AF69C(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
