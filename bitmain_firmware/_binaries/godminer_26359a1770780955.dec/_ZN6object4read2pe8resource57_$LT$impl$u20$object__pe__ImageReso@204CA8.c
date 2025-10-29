int __fastcall object::read::pe::resource::<impl object::pe::ImageResourceDirectoryEntry>::name_or_id(
        int result,
        int *a2)
{
  int v2; // r1

  v2 = *a2;
  if ( v2 < 0 )
  {
    *(_DWORD *)(result + 4) = v2 & 0x7FFFFFFF;
    *(_WORD *)result = 0;
  }
  else
  {
    *(_WORD *)(result + 2) = v2;
    *(_WORD *)result = 1;
  }
  return result;
}
