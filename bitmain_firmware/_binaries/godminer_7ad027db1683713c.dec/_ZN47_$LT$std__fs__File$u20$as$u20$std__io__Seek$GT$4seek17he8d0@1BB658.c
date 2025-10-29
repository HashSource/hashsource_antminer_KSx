int __fastcall <std::fs::File as std::io::Seek>::seek(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // r0

  v4 = lseek64(*a2, dword_29261C[*a3], a3[2], a3[3], dword_29261C[*a3]);
  if ( ((unsigned int)v4 & HIDWORD(v4)) == 0xFFFFFFFF )
  {
    a1[2] = *_errno_location();
    a1[1] = 0;
    *a1 = 1;
    return 1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = v4;
    *a1 = 0;
    return 0;
  }
}
