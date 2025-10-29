int __fastcall sub_1AEEEC(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
