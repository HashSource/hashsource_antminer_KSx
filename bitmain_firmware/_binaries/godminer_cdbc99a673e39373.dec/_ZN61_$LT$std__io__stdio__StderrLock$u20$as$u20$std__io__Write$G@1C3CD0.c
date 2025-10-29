int __fastcall <std::io::stdio::StderrLock as std::io::Write>::write(int *a1, int *a2, void *buf, size_t a4)
{
  int v4; // r6
  size_t v6; // r5
  ssize_t v7; // r0
  int v8; // r1
  int result; // r0
  _BYTE v10[4]; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  if ( *(_DWORD *)(*a2 + 12) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v10, (int)&off_2CA2E8, (int)&off_2CAB44);
  v6 = a4;
  if ( a4 >= 0x7FFFFFFF )
    a4 = 0x7FFFFFFF;
  *(_DWORD *)(v4 + 12) = -1;
  v7 = write(2, buf, a4);
  if ( v7 != -1 )
  {
    v8 = 4;
LABEL_8:
    *a1 = v8;
    a1[1] = v7;
    goto LABEL_9;
  }
  v7 = *_errno_location();
  v8 = 0;
  if ( v7 != 9 )
    goto LABEL_8;
  a1[1] = v6;
  *(_BYTE *)a1 = 4;
LABEL_9:
  result = *(_DWORD *)(v4 + 12) + 1;
  *(_DWORD *)(v4 + 12) = result;
  return result;
}
