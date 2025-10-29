int sub_128FDC()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30DACC != 1 )
    sub_128954();
  sub_128844();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E8F90, &v1, 1u) != 1 )
    sub_128AE0();
  sub_128918();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E8F90, &v1, 1u) != 1 )
    sub_128B78();
  return usleep(0x3E8u);
}
