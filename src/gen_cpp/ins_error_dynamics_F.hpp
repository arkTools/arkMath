F(0,0) = cosPhi*tanTheta*wy-sinPhi*tanTheta*wz;
F(0,1) = cosPhi*secTheta^2*wz+sinPhi*secTheta^2*wy;
F(0,2) = 0;
F(0,3) = 0;
F(0,4) = 0;
F(0,5) = 0;
F(0,6) = 0;
F(0,7) = 0;
F(0,8) = 0;
F(1,0) = -cosPhi*wz-sinPhi*wy;
F(1,1) = 0;
F(1,2) = 0;
F(1,3) = 0;
F(1,4) = 0;
F(1,5) = 0;
F(1,6) = 0;
F(1,7) = 0;
F(1,8) = 0;
F(2,0) = -(sinPhi*wz-cosPhi*wy)/cosTheta;
F(2,1) = (cosPhi*sinTheta*wz+sinPhi*sinTheta*wy)/cosTheta^2;
F(2,2) = 0;
F(2,3) = 0;
F(2,4) = 0;
F(2,5) = 0;
F(2,6) = 0;
F(2,7) = 0;
F(2,8) = 0;
F(3,0) = (cosPhi*sinPsi-sinPhi*cosPsi*sinTheta)*fz+(cosPhi*cosPsi*sinTheta+sinPhi*sinPsi)*fy;
F(3,1) = cosPhi*cosPsi*cosTheta*fz+sinPhi*cosPsi*cosTheta*fy-cosPsi*sinTheta*fx;
F(3,2) = (sinPhi*cosPsi-cosPhi*sinPsi*sinTheta)*fz+(-sinPhi*sinPsi*sinTheta-cosPhi*cosPsi)*fy-sinPsi*cosTheta*fx;
F(3,3) = Vd/(R0+h);
F(3,4) = -(2*Omega*sinL*R0+2*Ve*tanL+2*h*Omega*sinL)/(R0+h);
F(3,5) = Vn/(R0+h);
F(3,6) = -(2*Omega*Ve*cosL*R0+Ve^2*secL^2+2*h*Omega*Ve*cosL)/(R0+h);
F(3,7) = 0;
F(3,8) = (Ve^2*tanL-Vd*Vn)/(R0^2+2*h*R0+h^2);
F(4,0) = (-sinPhi*sinPsi*sinTheta-cosPhi*cosPsi)*fz+(cosPhi*sinPsi*sinTheta-sinPhi*cosPsi)*fy;
F(4,1) = cosPhi*sinPsi*cosTheta*fz+sinPhi*sinPsi*cosTheta*fy-sinPsi*sinTheta*fx;
F(4,2) = (cosPhi*cosPsi*sinTheta+sinPhi*sinPsi)*fz+(sinPhi*cosPsi*sinTheta-cosPhi*sinPsi)*fy+cosPsi*cosTheta*fx;
F(4,3) = (2*Omega*sinL*R0+Ve*tanL+2*h*Omega*sinL)/(R0+h);
F(4,4) = (Vn*tanL+Vd)/(R0+h);
F(4,5) = (2*Omega*cosL*R0+2*h*Omega*cosL+Ve)/(R0+h);
F(4,6) = -((2*Omega*Vd*sinL-2*Omega*Vn*cosL)*R0+2*h*Omega*Vd*sinL-Ve*Vn*secL^2-2*h*Omega*Vn*cosL)/(R0+h);
F(4,7) = 0;
F(4,8) = -(Ve*Vn*tanL+Vd*Ve)/(R0^2+2*h*R0+h^2);
F(5,0) = cosPhi*cosTheta*fy-sinPhi*cosTheta*fz;
F(5,1) = -cosPhi*sinTheta*fz-sinPhi*sinTheta*fy-cosTheta*fx;
F(5,2) = 0;
F(5,3) = -2*Vn/(R0+h);
F(5,4) = -(2*Omega*cosL*R0+2*h*Omega*cosL+2*Ve)/(R0+h);
F(5,5) = 0;
F(5,6) = 2*Omega*Ve*sinL;
F(5,7) = 0;
F(5,8) = (Vn^2+Ve^2)/(R0^2+2*h*R0+h^2);
F(6,0) = 0;
F(6,1) = 0;
F(6,2) = 0;
F(6,3) = 1/(R0+h);
F(6,4) = 0;
F(6,5) = 0;
F(6,6) = 0;
F(6,7) = 0;
F(6,8) = -Vn/(R0^2+2*h*R0+h^2);
F(7,0) = 0;
F(7,1) = 0;
F(7,2) = 0;
F(7,3) = 0;
F(7,4) = 1/(cosL*R0+h*cosL);
F(7,5) = 0;
F(7,6) = Ve*sinL/(cosL^2*R0+h*cosL^2);
F(7,7) = 0;
F(7,8) = -Ve/(cosL*R0^2+2*h*cosL*R0+h^2*cosL);
F(8,0) = 0;
F(8,1) = 0;
F(8,2) = 0;
F(8,3) = 0;
F(8,4) = 0;
F(8,5) = -1;
F(8,6) = 0;
F(8,7) = 0;
F(8,8) = 0;
