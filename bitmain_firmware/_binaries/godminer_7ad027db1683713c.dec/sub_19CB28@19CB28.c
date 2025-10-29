int __fastcall sub_19CB28(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
