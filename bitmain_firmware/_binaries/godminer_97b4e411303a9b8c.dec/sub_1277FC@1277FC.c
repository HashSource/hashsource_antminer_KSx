int sub_1277FC()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30C7B4 != 1 )
    sub_127204();
  v1 = 49;
  if ( write(dword_2E7C88, &v1, 1u) != 1 )
    sub_127428();
  sub_1271C8();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E7C88, &v1, 1u) != 1 )
    sub_127390();
  return usleep(0x3E8u);
}
