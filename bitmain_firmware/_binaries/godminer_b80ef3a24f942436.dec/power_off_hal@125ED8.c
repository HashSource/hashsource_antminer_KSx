int __fastcall power_off_hal(int a1)
{
  if ( platform_is_pic_mcu_en() )
  {
    pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 0);
    usleep((__useconds_t)"1a378b912f98865E");
  }
  return 0;
}
