int sub_126D7C()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_307764 != 1 )
    sub_1266F4();
  sub_1265E4();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_126880();
  sub_1266B8();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_126918();
  return usleep(0x3E8u);
}
