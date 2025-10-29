int __fastcall set_cur_block_num_rvn(double a1)
{
  if ( *(_QWORD *)&dbl_2EB8A8 < *(_QWORD *)&a1 )
    dbl_2EB8A8 = a1;
  return LODWORD(a1);
}
