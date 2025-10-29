int __fastcall <std::sys::unix::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(__int64 a1)
{
  int v1; // r9
  int v2; // r5
  int *v3; // r0
  unsigned int *v4; // r4
  int v5; // r0
  int v6; // r6
  _WORD *v7; // r7
  size_t v8; // r0
  bool v9; // zf
  signed int v10; // r1
  const void *v11; // r0
  int v12; // r8
  int v13; // r5
  char v14; // r6
  int v15; // r2

  v1 = a1;
  LODWORD(a1) = 0;
  if ( *(_BYTE *)(HIDWORD(a1) + 4) )
  {
LABEL_2:
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    return a1;
  }
  v2 = HIDWORD(a1);
  v3 = _errno_location();
  v4 = *(unsigned int **)v2;
  *v3 = 0;
  v5 = readdir64(v4[2]);
  if ( !v5 )
  {
LABEL_13:
    *(_BYTE *)(v2 + 4) = 1;
    HIDWORD(a1) = *_errno_location();
    LODWORD(a1) = 0;
    if ( HIDWORD(a1) )
    {
      *(_QWORD *)(v1 + 8) = a1;
      *(_DWORD *)(v1 + 24) = 0;
      *(_DWORD *)v1 = 1;
      *(_DWORD *)(v1 + 4) = 0;
      return a1;
    }
    goto LABEL_2;
  }
  v6 = v5;
  while ( 1 )
  {
    v7 = (_WORD *)(v6 + 19);
    v8 = core::ffi::c_str::CStr::from_ptr::strlen_rt((const char *)(v6 + 19));
    if ( v8 != 2 )
      break;
    if ( *v7 != 11822 )
      goto LABEL_15;
LABEL_12:
    *_errno_location() = 0;
    v6 = readdir64(v4[2]);
    if ( !v6 )
      goto LABEL_13;
  }
  v9 = v8 == 1;
  if ( v8 == 1 )
    v9 = *(_BYTE *)v7 == 46;
  if ( v9 )
    goto LABEL_12;
LABEL_15:
  v10 = v8 + 1;
  v11 = (const void *)(v6 + 19);
  v12 = *(_DWORD *)v6;
  v13 = *(_DWORD *)(v6 + 4);
  v14 = *(_BYTE *)(v6 + 18);
  LODWORD(a1) = alloc::ffi::c_str::<impl alloc::borrow::ToOwned for core::ffi::c_str::CStr>::to_owned(v11, v10);
  do
    v15 = __ldrex(v4);
  while ( __strex(v15 + 1, v4) );
  if ( v15 <= -1 )
    __und(0xFDEEu);
  *(_DWORD *)(v1 + 8) = v12;
  *(_QWORD *)(v1 + 24) = a1;
  *(_DWORD *)(v1 + 32) = v4;
  *(_BYTE *)(v1 + 16) = v14;
  *(_DWORD *)(v1 + 12) = v13;
  *(_DWORD *)v1 = 1;
  *(_DWORD *)(v1 + 4) = 0;
  LODWORD(a1) = 0;
  return a1;
}
