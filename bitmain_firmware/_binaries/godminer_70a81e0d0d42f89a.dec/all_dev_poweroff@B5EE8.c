unsigned int all_dev_poweroff()
{
  int v0; // r4
  int all_created_runtime; // r0
  _DWORD *v2; // r5
  int v3; // t1
  int v4; // r0
  int v5; // r0
  int v7; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v7 = 0;
  all_created_runtime = get_all_created_runtime(&v7);
  if ( v7 > 0 )
  {
    v2 = (_DWORD *)(all_created_runtime - 4);
    do
    {
      v3 = v2[1];
      ++v2;
      ++v0;
      v4 = (*(int (**)(void))(v3 + 20))();
      v5 = dev_ctrl(v4);
      all_created_runtime = (*(int (__fastcall **)(_DWORD))(v5 + 28))(*(_DWORD *)(*v2 + 244));
    }
    while ( v7 > v0 );
  }
  byte_2EB900 = 0;
  bitmain_power_off(all_created_runtime);
  return sleep(1u);
}
