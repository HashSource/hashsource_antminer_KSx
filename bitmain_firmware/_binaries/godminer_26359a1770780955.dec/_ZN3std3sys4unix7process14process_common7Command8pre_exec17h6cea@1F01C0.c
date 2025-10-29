int __fastcall std::sys::unix::process::process_common::Command::pre_exec(_DWORD *a1, int a2, int a3)
{
  unsigned int *v5; // r0
  int v6; // t1
  int v8; // r1
  int v9; // r0
  int result; // r0

  v6 = a1[28];
  v5 = a1 + 28;
  v8 = v5[2];
  if ( v8 == v6 )
  {
    sub_1B6188(v5, v8);
    v8 = a1[30];
  }
  v9 = a1[29];
  a1[30] = v8 + 1;
  *(_DWORD *)(v9 + 8 * v8) = a2;
  result = v9 + 8 * v8;
  *(_DWORD *)(result + 4) = a3;
  return result;
}
