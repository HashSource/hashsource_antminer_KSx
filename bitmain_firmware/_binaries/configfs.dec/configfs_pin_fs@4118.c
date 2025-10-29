__int64 configfs_pin_fs()
{
  __int64 result; // x0

  LODWORD(result) = simple_pin_fs(&off_6D50, &qword_7208, &unk_7200);
  if ( (_DWORD)result )
    return (int)result;
  else
    return *(_QWORD *)qword_7208;
}
