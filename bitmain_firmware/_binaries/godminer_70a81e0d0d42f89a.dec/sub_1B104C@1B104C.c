int __fastcall sub_1B104C(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
