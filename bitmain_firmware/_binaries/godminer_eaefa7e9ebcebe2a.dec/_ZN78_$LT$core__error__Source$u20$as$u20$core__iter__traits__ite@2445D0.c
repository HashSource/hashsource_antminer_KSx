unsigned __int64 __fastcall <core::error::Source as core::iter::traits::iterator::Iterator>::next(_DWORD *a1, int a2)
{
  __int64 v2; // r4

  v2 = *(_QWORD *)a1;
  if ( *a1 )
  {
    *(_QWORD *)a1 = ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(HIDWORD(v2) + 24))(*a1);
    return v2;
  }
  else
  {
    *a1 = 0;
    a1[1] = a2;
    return __PAIR64__(HIDWORD(v2), 0);
  }
}
