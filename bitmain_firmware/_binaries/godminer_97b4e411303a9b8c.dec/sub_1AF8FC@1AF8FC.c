int __fastcall sub_1AF8FC(int fd)
{
  if ( fd != -1 )
    return close(fd);
  return fd;
}
