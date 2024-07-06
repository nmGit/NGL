from PIL import Image
import numpy as np

def image_to_c_array(path):
    img = Image.open(path)
    a = np.asarray(img)

    output="// " + path + "\n{\n"
    position = 8
    byte = 0

    for line in a:
    


        for b in line:
        
            position-=1
            print(b)
            
            if((b == [0, 0, 0]).all()):
                byte |= 0x01<< position

            if(position == 0):
                position = 8
            
                output += "\t0x%02x,\n"%(byte)
                byte = 0
            
        #output += "\n";
    output += "},\n"
    print(output)


    return output

def alphabet_to_c_array(output_file):
    f = open(output_file, "w")

    file = "#include <stdint.h>\n";
################################
# 8x8 Font
################################
    file += "uint8_t font8x8[][8] = {\n"    

    file += image_to_c_array("../font/8x8_0.png")
    file += image_to_c_array("../font/8x8_1.png")
    file += image_to_c_array("../font/8x8_2.png")
    file += image_to_c_array("../font/8x8_3.png")
    file += image_to_c_array("../font/8x8_4.png")
    file += image_to_c_array("../font/8x8_5.png")
    file += image_to_c_array("../font/8x8_6.png")
    file += image_to_c_array("../font/8x8_7.png")
    file += image_to_c_array("../font/8x8_8.png")
    file += image_to_c_array("../font/8x8_9.png")
    file += image_to_c_array("../font/8x8_colon.png")
    file += image_to_c_array("../font/8x8_semicolon.png")
    file += image_to_c_array("../font/8x8_lt.png")
    file += image_to_c_array("../font/8x8_equal.png")
    file += image_to_c_array("../font/8x8_lt.png")
    file += image_to_c_array("../font/8x8_qm.png")
    file += image_to_c_array("../font/8x8_at.png")
    file += image_to_c_array("../font/8x8_A.png")
    file += image_to_c_array("../font/8x8_B.png")
    file += image_to_c_array("../font/8x8_C.png")
    file += image_to_c_array("../font/8x8_D.png")
    file += image_to_c_array("../font/8x8_E.png")
    file += image_to_c_array("../font/8x8_F.png")
    file += image_to_c_array("../font/8x8_G.png")
    file += image_to_c_array("../font/8x8_H.png")
    file += image_to_c_array("../font/8x8_I.png")
    file += image_to_c_array("../font/8x8_J.png")
    file += image_to_c_array("../font/8x8_K.png")
    file += image_to_c_array("../font/8x8_L.png")
    file += image_to_c_array("../font/8x8_M.png")
    file += image_to_c_array("../font/8x8_N.png")
    file += image_to_c_array("../font/8x8_O.png")
    file += image_to_c_array("../font/8x8_P.png")
    file += image_to_c_array("../font/8x8_Q.png")
    file += image_to_c_array("../font/8x8_R.png")
    file += image_to_c_array("../font/8x8_S.png")
    file += image_to_c_array("../font/8x8_T.png")
    file += image_to_c_array("../font/8x8_U.png")
    file += image_to_c_array("../font/8x8_V.png")
    file += image_to_c_array("../font/8x8_W.png")
    file += image_to_c_array("../font/8x8_X.png")
    file += image_to_c_array("../font/8x8_Y.png")
    file += image_to_c_array("../font/8x8_Z.png")
    
    file += "};\n"

    file += \
"                          \n\
uint8_t* get_letter_8x8(char l)\n\
{                          \n\
	return font8x8[l - '0'];  \n\
}                          \n\
"
################################
# 24x24 Font
################################
    file += "uint8_t font24x24[][72] = {\n"    

    file += image_to_c_array("../font/24x24_space.png")
    file += image_to_c_array("../font/24x24_bang.png")
    file += image_to_c_array("../font/24x24_quote.png")
    file += image_to_c_array("../font/24x24_hash.png")
    file += image_to_c_array("../font/24x24_dollar.png")
    file += image_to_c_array("../font/24x24_pct.png")
    file += image_to_c_array("../font/24x24_and.png")
    file += image_to_c_array("../font/24x24_tick.png")
    file += image_to_c_array("../font/24x24_open_parens.png")
    file += image_to_c_array("../font/24x24_close_parens.png")
    file += image_to_c_array("../font/24x24_asterisk.png")
    file += image_to_c_array("../font/24x24_plus.png")
    file += image_to_c_array("../font/24x24_comma.png")
    file += image_to_c_array("../font/24x24_dash.png")
    file += image_to_c_array("../font/24x24_period.png")
    file += image_to_c_array("../font/24x24_fw_slash.png")
    file += image_to_c_array("../font/24x24_0.png")
    file += image_to_c_array("../font/24x24_1.png")
    file += image_to_c_array("../font/24x24_2.png")
    file += image_to_c_array("../font/24x24_3.png")
    file += image_to_c_array("../font/24x24_4.png")
    file += image_to_c_array("../font/24x24_5.png")
    file += image_to_c_array("../font/24x24_6.png")
    file += image_to_c_array("../font/24x24_7.png")
    file += image_to_c_array("../font/24x24_8.png")
    file += image_to_c_array("../font/24x24_9.png")
    file += image_to_c_array("../font/24x24_colon.png")
    file += image_to_c_array("../font/24x24_semicolon.png")
    file += image_to_c_array("../font/24x24_gt.png")
    file += image_to_c_array("../font/24x24_equal.png")
    file += image_to_c_array("../font/24x24_lt.png")
    file += image_to_c_array("../font/24x24_qm.png")
    file += image_to_c_array("../font/24x24_at.png")
    file += image_to_c_array("../font/24x24_A.png")
    file += image_to_c_array("../font/24x24_B.png")
    file += image_to_c_array("../font/24x24_C.png")
    file += image_to_c_array("../font/24x24_D.png")
    file += image_to_c_array("../font/24x24_E.png")
    file += image_to_c_array("../font/24x24_F.png")
    file += image_to_c_array("../font/24x24_G.png")
    file += image_to_c_array("../font/24x24_H.png")
    file += image_to_c_array("../font/24x24_I.png")
    file += image_to_c_array("../font/24x24_J.png")
    file += image_to_c_array("../font/24x24_K.png")
    file += image_to_c_array("../font/24x24_L.png")
    file += image_to_c_array("../font/24x24_M.png")
    file += image_to_c_array("../font/24x24_N.png")
    file += image_to_c_array("../font/24x24_O.png")
    file += image_to_c_array("../font/24x24_P.png")
    file += image_to_c_array("../font/24x24_Q.png")
    file += image_to_c_array("../font/24x24_R.png")
    file += image_to_c_array("../font/24x24_S.png")
    file += image_to_c_array("../font/24x24_T.png")
    file += image_to_c_array("../font/24x24_U.png")
    file += image_to_c_array("../font/24x24_V.png")
    file += image_to_c_array("../font/24x24_W.png")
    file += image_to_c_array("../font/24x24_X.png")
    file += image_to_c_array("../font/24x24_Y.png")
    file += image_to_c_array("../font/24x24_Z.png")

    
    
    file += "};\n"

    file += \
"                          \n\
uint8_t* get_letter_24x24(char l)\n\
{                          \n\
	return font24x24[l - ' '];  \n\
}                          \n\
"

################################
# 48x60 Font
################################
    file += "uint8_t font48x55[][360] = {\n"    

    file += image_to_c_array("../font/48x55_space.png")
   # file += image_to_c_array("../font/48x55_bang.png")
   # file += image_to_c_array("../font/48x55_quote.png")
   # file += image_to_c_array("../font/48x55_hash.png")
   # file += image_to_c_array("../font/48x55_dollar.png")
   # file += image_to_c_array("../font/48x55_pct.png")
   # file += image_to_c_array("../font/48x55_and.png")
   # file += image_to_c_array("../font/48x55_tick.png")
   # file += image_to_c_array("../font/48x55_open_parens.png")
   # file += image_to_c_array("../font/48x55_close_parens.png")
   # file += image_to_c_array("../font/48x55_asterisk.png")
   # file += image_to_c_array("../font/48x55_plus.png")
   # file += image_to_c_array("../font/48x55_comma.png")
   # file += image_to_c_array("../font/48x55_dash.png")
   # file += image_to_c_array("../font/48x55_period.png")
   # file += image_to_c_array("../font/48x55_fw_slash.png")
    file += image_to_c_array("../font/48x55_0.png")
    file += image_to_c_array("../font/48x55_1.png")
    file += image_to_c_array("../font/48x55_2.png")
    file += image_to_c_array("../font/48x55_3.png")
    file += image_to_c_array("../font/48x55_4.png")
    file += image_to_c_array("../font/48x55_5.png")
    file += image_to_c_array("../font/48x55_6.png")
    file += image_to_c_array("../font/48x55_7.png")
    file += image_to_c_array("../font/48x55_8.png")
    file += image_to_c_array("../font/48x55_9.png")
    file += image_to_c_array("../font/48x55_colon.png")
   # file += image_to_c_array("../font/48x55_semicolon.png")
   # file += image_to_c_array("../font/48x55_gt.png")
   # file += image_to_c_array("../font/48x55_equal.png")
   # file += image_to_c_array("../font/48x55_lt.png")
   # file += image_to_c_array("../font/48x55_question.png")
   # file += image_to_c_array("../font/48x55_at.png")
   # file += image_to_c_array("../font/48x55_A.png")
   # file += image_to_c_array("../font/48x55_B.png")
   # file += image_to_c_array("../font/48x55_C.png")
   # file += image_to_c_array("../font/48x55_D.png")
   # file += image_to_c_array("../font/48x55_E.png")
   # file += image_to_c_array("../font/48x55_F.png")
   # file += image_to_c_array("../font/48x55_G.png")
   # file += image_to_c_array("../font/48x55_H.png")
   # file += image_to_c_array("../font/48x55_I.png")
   # file += image_to_c_array("../font/48x55_J.png")
   # file += image_to_c_array("../font/48x55_K.png")
   # file += image_to_c_array("../font/48x55_L.png")
   # file += image_to_c_array("../font/48x55_M.png")
   # file += image_to_c_array("../font/48x55_N.png")
   # file += image_to_c_array("../font/48x55_O.png")
   # file += image_to_c_array("../font/48x55_P.png")
   # file += image_to_c_array("../font/48x55_Q.png")
   # file += image_to_c_array("../font/48x55_R.png")
   # file += image_to_c_array("../font/48x55_S.png")
   # file += image_to_c_array("../font/48x55_T.png")
   # file += image_to_c_array("../font/48x55_U.png")
   # file += image_to_c_array("../font/48x55_V.png")
   # file += image_to_c_array("../font/48x55_W.png")
   # file += image_to_c_array("../font/48x55_X.png")
   # file += image_to_c_array("../font/48x55_Y.png")
   # file += image_to_c_array("../font/48x55_Z.png")


    
    
    file += "};\n"

    file += \
"                                       \n\
uint8_t* get_letter_48x55(char l)       \n\
{                                       \n\
    if(l == ' ')                        \n\
    {                                   \n\
        return font48x55[0];           \n\
    }                                   \n\
	return font48x55[l-'/'];          \n\
}                                       \n\
"
    f.write(file)
    return    

alphabet_to_c_array("../src/Font.cpp")