R_mag_n(0,0) = sinDec2*cosDip2*sig_dip**2+cosDec2*sinDip2*sig_dec**2;
R_mag_n(0,1) = cosDec*sinDec*sinDip2*sig_dec**2-cosDec*sinDec*cosDip2*sig_dip**2;
R_mag_n(0,2) = -cosDec*cosDip*sinDip*sig_dec**2;
R_mag_n(1,0) = cosDec*sinDec*sinDip2*sig_dec**2-cosDec*sinDec*cosDip2*sig_dip**2;
R_mag_n(1,1) = cosDec2*cosDip2*sig_dip**2+sinDec2*sinDip2*sig_dec**2;
R_mag_n(1,2) = -sinDec*cosDip*sinDip*sig_dec**2;
R_mag_n(2,0) = -cosDec*cosDip*sinDip*sig_dec**2;
R_mag_n(2,1) = -sinDec*cosDip*sinDip*sig_dec**2;
R_mag_n(2,2) = cosDip2*sig_dec**2;
