int __fastcall sub_1B2B28(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
