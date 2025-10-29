int __fastcall object::read::elf::relocation::RelocationSections::get(int a1, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  _BOOL4 v4; // r0
  int v5; // r2

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  if ( v2 > a2 )
    a2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * a2);
  v4 = v2 > v3;
  v5 = a2;
  if ( a2 )
    v5 = 1;
  return v4 & v5;
}
