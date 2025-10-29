int __fastcall sub_1AEDEC(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
