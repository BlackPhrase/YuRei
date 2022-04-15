int g_editor;

int g_present_mode;

float ps_cam_inert;
float ps_cam_slide_inert;

float ps_hud_fov;

struct _flags<unsigned int> ps_hud_flags;

unsigned int r_current_mode;
int r_supersample;
float r_view_distance;

struct _flags<unsigned int> g_commonflags;

struct uscript::property_holder *g_config;

class uspatial::dbase *g_spatial_space;
class uspatial::dbase *g_spatial_space_physic;