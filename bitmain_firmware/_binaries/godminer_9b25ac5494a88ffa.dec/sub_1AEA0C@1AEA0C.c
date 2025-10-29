int __fastcall sub_1AEA0C(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
