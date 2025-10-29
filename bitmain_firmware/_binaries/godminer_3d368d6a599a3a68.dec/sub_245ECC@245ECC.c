// positive sp value has been detected, the output may be wrong!
int __fastcall sub_245ECC(_DWORD *a1, _DWORD *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(a2[1] + 16))(*a2, *a1);
}
