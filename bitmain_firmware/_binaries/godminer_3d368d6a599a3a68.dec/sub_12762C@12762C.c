int sub_12762C()
{
  char v1; // [sp+7h] [bp-5h] BYREF

  if ( dword_30776C != 1 )
    sub_126FA4();
  sub_126E94();
  usleep(0x3E8u);
  v1 = 48;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_127130();
  sub_126F68();
  usleep(0x3E8u);
  v1 = 49;
  if ( write(dword_2E6C84, &v1, 1u) != 1 )
    sub_1271C8();
  return usleep(0x3E8u);
}
