int __fastcall get_uuid(_QWORD *a1)
{
  if ( !a1 )
    return -1;
  *a1 = 0;
  a1[1] = 0;
  return sub_122C68((int)a1);
}
