int __fastcall <std::process::Child as std::sys_common::IntoInner<std::sys::unix::process::process_inner::Process>>::into_inner(
        _DWORD *a1,
        _DWORD *a2)
{
  int v4; // r3
  int v5; // r12
  int v6; // lr
  int v7; // r0
  int v8; // r0
  int result; // r0

  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  *a1 = *a2;
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  if ( v7 != -1 )
    close(v7);
  v8 = a2[5];
  if ( v8 != -1 )
    close(v8);
  result = a2[6];
  if ( result != -1 )
    return close(result);
  return result;
}
