_DWORD *__fastcall <std::process::Child as std::sys_common::FromInner<(std::sys::unix::process::process_inner::Process,std::sys::unix::process::process_common::StdioPipes)>>::from_inner(
        _DWORD *result,
        int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int v6; // r4
  int v7; // r5
  int v8; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  v7 = a2[5];
  v8 = a2[6];
  *result = v2;
  result[1] = v3;
  result[2] = v4;
  result[3] = v5;
  result[4] = v6;
  result[5] = v7;
  result[6] = v8;
  return result;
}
