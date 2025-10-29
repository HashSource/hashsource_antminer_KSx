int sub_12788C()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30C7B4 != 1 )
    sub_127204();
  sub_1270F4();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E7C88, &v1, 1u) != 1 )
    sub_127390();
  sub_1271C8();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E7C88, &v1, 1u) != 1 )
    sub_127428();
  return usleep(0x3E8u);
}
