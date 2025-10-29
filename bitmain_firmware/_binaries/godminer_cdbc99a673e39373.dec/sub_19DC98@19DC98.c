int __fastcall sub_19DC98(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
