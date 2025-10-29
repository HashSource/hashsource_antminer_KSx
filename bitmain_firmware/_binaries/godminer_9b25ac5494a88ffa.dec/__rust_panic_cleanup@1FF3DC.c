void __fastcall _rust_panic_cleanup(_DWORD *a1, _UNKNOWN **ptr)
{
  void *v3; // r5
  void *v4; // r6

  if ( *(_QWORD *)ptr != 0x4D4F5A0052555354LL )
  {
    Unwind_DeleteException(ptr);
LABEL_5:
    _rust_foreign_exception();
  }
  if ( ptr[24] != &unk_2A6F98 )
    goto LABEL_5;
  v3 = ptr[25];
  v4 = ptr[26];
  _rust_dealloc(ptr);
  *a1 = v3;
  a1[1] = v4;
}
