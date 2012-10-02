F_body_quad(0,0) = 0;
F_body_quad(0,1) = -wy;
F_body_quad(0,2) = -cosTheta*g;
F_body_quad(0,3) = -W;
F_body_quad(0,4) = wz;
F_body_quad(0,5) = 0;
F_body_quad(0,6) = 0;
F_body_quad(0,7) = 0;
F_body_quad(0,8) = V;
F_body_quad(1,10) = 0;
F_body_quad(1,11) = 0;
F_body_quad(1,12) = 0;
F_body_quad(1,13) = 0;
F_body_quad(1,0) = wy;
F_body_quad(1,1) = 0;
F_body_quad(1,2) = -cosPhi*sinTheta*g;
F_body_quad(1,3) = U;
F_body_quad(1,4) = -wx;
F_body_quad(1,5) = -sinPhi*cosTheta*g;
F_body_quad(1,6) = -V;
F_body_quad(1,7) = 0;
F_body_quad(1,8) = 0;
F_body_quad(2,10) = -pi^3*rho*batVolt^2*KV^2*rBlade^4*C(T)/m/900.0;
F_body_quad(2,11) = -pi^3*rho*batVolt^2*KV^2*rBlade^4*C(T)/m/900.0;
F_body_quad(2,12) = -pi^3*rho*batVolt^2*KV^2*rBlade^4*C(T)/m/900.0;
F_body_quad(2,13) = -pi^3*rho*batVolt^2*KV^2*rBlade^4*C(T)/m/900.0;
F_body_quad(2,0) = 0;
F_body_quad(2,1) = 0;
F_body_quad(2,2) = 0;
F_body_quad(2,3) = cosPhi;
F_body_quad(2,4) = 0;
F_body_quad(2,5) = -cosPhi*wz-sinPhi*wy;
F_body_quad(2,6) = 0;
F_body_quad(2,7) = 0;
F_body_quad(2,8) = -sinPhi;
F_body_quad(3,10) = 0;
F_body_quad(3,11) = 0;
F_body_quad(3,12) = 0;
F_body_quad(3,13) = 0;
F_body_quad(3,0) = 0;
F_body_quad(3,1) = 0;
F_body_quad(3,2) = 0;
F_body_quad(3,3) = 0;
F_body_quad(3,4) = 0;
F_body_quad(3,5) = 0;
F_body_quad(3,6) = (Jz-Jx)*wz/Jy;
F_body_quad(3,7) = 0;
F_body_quad(3,8) = (Jz-Jx)*wx/Jy;
F_body_quad(4,10) = 0;
F_body_quad(4,11) = 0;
F_body_quad(4,12) = pi^3*dm*rho*batVolt^2*KV^2*rBlade^4*C(T)/Jy/900.0;
F_body_quad(4,13) = -pi^3*dm*rho*batVolt^2*KV^2*rBlade^4*C(T)/Jy/900.0;
F_body_quad(4,0) = -wz;
F_body_quad(4,1) = wx;
F_body_quad(4,2) = -sinPhi*sinTheta*g;
F_body_quad(4,3) = 0;
F_body_quad(4,4) = 0;
F_body_quad(4,5) = cosPhi*cosTheta*g;
F_body_quad(4,6) = W;
F_body_quad(4,7) = 0;
F_body_quad(4,8) = -U;
F_body_quad(5,10) = 0;
F_body_quad(5,11) = 0;
F_body_quad(5,12) = 0;
F_body_quad(5,13) = 0;
F_body_quad(5,0) = 0;
F_body_quad(5,1) = 0;
F_body_quad(5,2) = (cosPhi*wz+sinPhi*wy)/cosTheta^2;
F_body_quad(5,3) = sinPhi*sinTheta/cosTheta;
F_body_quad(5,4) = 0;
F_body_quad(5,5) = -(sinPhi*sinTheta*wz-cosPhi*sinTheta*wy)/cosTheta;
F_body_quad(5,6) = 1;
F_body_quad(5,7) = 0;
F_body_quad(5,8) = cosPhi*sinTheta/cosTheta;
F_body_quad(6,10) = 0;
F_body_quad(6,11) = 0;
F_body_quad(6,12) = 0;
F_body_quad(6,13) = 0;
F_body_quad(6,0) = 0;
F_body_quad(6,1) = 0;
F_body_quad(6,2) = 0;
F_body_quad(6,3) = -(Jz-Jy)*wz/Jx;
F_body_quad(6,4) = 0;
F_body_quad(6,5) = 0;
F_body_quad(6,6) = 0;
F_body_quad(6,7) = 0;
F_body_quad(6,8) = -(Jz-Jy)*wy/Jx;
F_body_quad(7,10) = pi^3*dm*rho*batVolt^2*KV^2*rBlade^4*C(T)/Jx/900.0;
F_body_quad(7,11) = -pi^3*dm*rho*batVolt^2*KV^2*rBlade^4*C(T)/Jx/900.0;
F_body_quad(7,12) = 0;
F_body_quad(7,13) = 0;
F_body_quad(7,0) = 0;
F_body_quad(7,1) = 0;
F_body_quad(7,2) = (cosPhi*sinTheta*wz+sinPhi*sinTheta*wy)/cosTheta^2;
F_body_quad(7,3) = sinPhi/cosTheta;
F_body_quad(7,4) = 0;
F_body_quad(7,5) = -(sinPhi*wz-cosPhi*wy)/cosTheta;
F_body_quad(7,6) = 0;
F_body_quad(7,7) = 0;
F_body_quad(7,8) = cosPhi/cosTheta;
F_body_quad(8,10) = 0;
F_body_quad(8,11) = 0;
F_body_quad(8,12) = 0;
F_body_quad(8,13) = 0;
F_body_quad(8,0) = 0;
F_body_quad(8,1) = 0;
F_body_quad(8,2) = 0;
F_body_quad(8,3) = -(Jy-Jx)*wx/Jz;
F_body_quad(8,4) = 0;
F_body_quad(8,5) = 0;
F_body_quad(8,6) = -(Jy-Jx)*wy/Jz;
F_body_quad(8,7) = 0;
F_body_quad(8,8) = 0;
F_body_quad(9,10) = pi^3*rho*batVolt^2*KV^2*C(Q)*rBlade^5/Jz/900.0;
F_body_quad(9,11) = pi^3*rho*batVolt^2*KV^2*C(Q)*rBlade^5/Jz/900.0;
F_body_quad(9,12) = -pi^3*rho*batVolt^2*KV^2*C(Q)*rBlade^5/Jz/900.0;
F_body_quad(9,13) = -pi^3*rho*batVolt^2*KV^2*C(Q)*rBlade^5/Jz/900.0;
F_body_quad(10,1) = 0;
F_body_quad(10,2) = 0;
F_body_quad(10,3) = 0;
F_body_quad(10,4) = 0;
F_body_quad(10,5) = 0;
F_body_quad(10,6) = 0;
F_body_quad(10,7) = 0;
F_body_quad(10,8) = 0;
F_body_quad(10,9) = 0;
F_body_quad(10,10) = -tau(motor);
F_body_quad(10,11) = 0;
F_body_quad(10,12) = 0;
F_body_quad(10,13) = 0;
F_body_quad(11,1) = 0;
F_body_quad(11,2) = 0;
F_body_quad(11,3) = 0;
F_body_quad(11,4) = 0;
F_body_quad(11,5) = 0;
F_body_quad(11,6) = 0;
F_body_quad(11,7) = 0;
F_body_quad(11,8) = 0;
F_body_quad(11,9) = 0;
F_body_quad(11,10) = 0;
F_body_quad(11,11) = -tau(motor);
F_body_quad(11,12) = 0;
F_body_quad(11,13) = 0;
F_body_quad(12,1) = 0;
F_body_quad(12,2) = 0;
F_body_quad(12,3) = 0;
F_body_quad(12,4) = 0;
F_body_quad(12,5) = 0;
F_body_quad(12,6) = 0;
F_body_quad(12,7) = 0;
F_body_quad(12,8) = 0;
F_body_quad(12,9) = 0;
F_body_quad(12,10) = 0;
F_body_quad(12,11) = 0;
F_body_quad(12,12) = -tau(motor);
F_body_quad(12,13) = 0;
F_body_quad(13,1) = 0;
F_body_quad(13,2) = 0;
F_body_quad(13,3) = 0;
F_body_quad(13,4) = 0;
F_body_quad(13,5) = 0;
F_body_quad(13,6) = 0;
F_body_quad(13,7) = 0;
F_body_quad(13,8) = 0;
F_body_quad(13,9) = 0;
F_body_quad(13,10) = 0;
F_body_quad(13,11) = 0;
F_body_quad(13,12) = 0;
F_body_quad(13,13) = -tau(motor);
G_body_quad(0,0) = 0;
G_body_quad(0,1) = 0;
G_body_quad(0,2) = 0;
G_body_quad(0,3) = 0;
G_body_quad(1,0) = 0;
G_body_quad(1,1) = 0;
G_body_quad(1,2) = 0;
G_body_quad(1,3) = 0;
G_body_quad(2,0) = 0;
G_body_quad(2,1) = 0;
G_body_quad(2,2) = 0;
G_body_quad(2,3) = 0;
G_body_quad(3,0) = 0;
G_body_quad(3,1) = 0;
G_body_quad(3,2) = 0;
G_body_quad(3,3) = 0;
G_body_quad(4,0) = 0;
G_body_quad(4,1) = 0;
G_body_quad(4,2) = 0;
G_body_quad(4,3) = 0;
G_body_quad(5,0) = 0;
G_body_quad(5,1) = 0;
G_body_quad(5,2) = 0;
G_body_quad(5,3) = 0;
G_body_quad(6,0) = 0;
G_body_quad(6,1) = 0;
G_body_quad(6,2) = 0;
G_body_quad(6,3) = 0;
G_body_quad(7,0) = 0;
G_body_quad(7,1) = 0;
G_body_quad(7,2) = 0;
G_body_quad(7,3) = 0;
G_body_quad(8,0) = 0;
G_body_quad(8,1) = 0;
G_body_quad(8,2) = 0;
G_body_quad(8,3) = 0;
G_body_quad(10,1) = tau(motor)/4.0;
G_body_quad(10,2) = 0;
G_body_quad(10,3) = tau(motor)/2.0;
G_body_quad(10,4) = tau(motor)/4.0;
G_body_quad(11,1) = tau(motor)/4.0;
G_body_quad(11,2) = 0;
G_body_quad(11,3) = -tau(motor)/2.0;
G_body_quad(11,4) = tau(motor)/4.0;
G_body_quad(12,1) = tau(motor)/4.0;
G_body_quad(12,2) = tau(motor)/2.0;
G_body_quad(12,3) = 0;
G_body_quad(12,4) = -tau(motor)/4.0;
G_body_quad(13,1) = tau(motor)/4.0;
G_body_quad(13,2) = -tau(motor)/2.0;
G_body_quad(13,3) = 0;
G_body_quad(13,4) = -tau(motor)/4.0;
C_body_quad(0,0) = 1;
C_body_quad(0,1) = 0;
C_body_quad(0,2) = 0;
C_body_quad(0,3) = 0;
C_body_quad(0,4) = 0;
C_body_quad(0,5) = 0;
C_body_quad(0,6) = 0;
C_body_quad(0,7) = 0;
C_body_quad(0,8) = 0;
C_body_quad(1,10) = 0;
C_body_quad(1,11) = 0;
C_body_quad(1,12) = 0;
C_body_quad(1,13) = 0;
C_body_quad(1,0) = 0;
C_body_quad(1,1) = 1;
C_body_quad(1,2) = 0;
C_body_quad(1,3) = 0;
C_body_quad(1,4) = 0;
C_body_quad(1,5) = 0;
C_body_quad(1,6) = 0;
C_body_quad(1,7) = 0;
C_body_quad(1,8) = 0;
C_body_quad(2,10) = 0;
C_body_quad(2,11) = 0;
C_body_quad(2,12) = 0;
C_body_quad(2,13) = 0;
C_body_quad(2,0) = 0;
C_body_quad(2,1) = 0;
C_body_quad(2,2) = 1;
C_body_quad(2,3) = 0;
C_body_quad(2,4) = 0;
C_body_quad(2,5) = 0;
C_body_quad(2,6) = 0;
C_body_quad(2,7) = 0;
C_body_quad(2,8) = 0;
C_body_quad(3,10) = 0;
C_body_quad(3,11) = 0;
C_body_quad(3,12) = 0;
C_body_quad(3,13) = 0;
C_body_quad(3,0) = 0;
C_body_quad(3,1) = 0;
C_body_quad(3,2) = 0;
C_body_quad(3,3) = 1;
C_body_quad(3,4) = 0;
C_body_quad(3,5) = 0;
C_body_quad(3,6) = 0;
C_body_quad(3,7) = 0;
C_body_quad(3,8) = 0;
C_body_quad(4,10) = 0;
C_body_quad(4,11) = 0;
C_body_quad(4,12) = 0;
C_body_quad(4,13) = 0;
C_body_quad(4,0) = 0;
C_body_quad(4,1) = 0;
C_body_quad(4,2) = 0;
C_body_quad(4,3) = 0;
C_body_quad(4,4) = 0;
C_body_quad(4,5) = 0;
C_body_quad(4,6) = 0;
C_body_quad(4,7) = 0;
C_body_quad(4,8) = 0;
C_body_quad(5,10) = 0;
C_body_quad(5,11) = 0;
C_body_quad(5,12) = 0;
C_body_quad(5,13) = 0;
C_body_quad(5,0) = 0;
C_body_quad(5,1) = 0;
C_body_quad(5,2) = 0;
C_body_quad(5,3) = 0;
C_body_quad(5,4) = 1;
C_body_quad(5,5) = 0;
C_body_quad(5,6) = 0;
C_body_quad(5,7) = 0;
C_body_quad(5,8) = 0;
C_body_quad(6,10) = 0;
C_body_quad(6,11) = 0;
C_body_quad(6,12) = 0;
C_body_quad(6,13) = 0;
C_body_quad(6,0) = 0;
C_body_quad(6,1) = 0;
C_body_quad(6,2) = 0;
C_body_quad(6,3) = 0;
C_body_quad(6,4) = 0;
C_body_quad(6,5) = 1;
C_body_quad(6,6) = 0;
C_body_quad(6,7) = 0;
C_body_quad(6,8) = 0;
C_body_quad(7,10) = 0;
C_body_quad(7,11) = 0;
C_body_quad(7,12) = 0;
C_body_quad(7,13) = 0;
C_body_quad(7,0) = 0;
C_body_quad(7,1) = 0;
C_body_quad(7,2) = 0;
C_body_quad(7,3) = 0;
C_body_quad(7,4) = 0;
C_body_quad(7,5) = 0;
C_body_quad(7,6) = 1;
C_body_quad(7,7) = 0;
C_body_quad(7,8) = 0;
C_body_quad(8,10) = 0;
C_body_quad(8,11) = 0;
C_body_quad(8,12) = 0;
C_body_quad(8,13) = 0;
C_body_quad(8,0) = 0;
C_body_quad(8,1) = 0;
C_body_quad(8,2) = 0;
C_body_quad(8,3) = 0;
C_body_quad(8,4) = 0;
C_body_quad(8,5) = 0;
C_body_quad(8,6) = 0;
C_body_quad(8,7) = 1;
C_body_quad(8,8) = 0;
C_body_quad(9,10) = 0;
C_body_quad(9,11) = 0;
C_body_quad(9,12) = 0;
C_body_quad(9,13) = 0;
C_body_quad(10,1) = 0;
C_body_quad(10,2) = 0;
C_body_quad(10,3) = 0;
C_body_quad(10,4) = 0;
C_body_quad(10,5) = 0;
C_body_quad(10,6) = 0;
C_body_quad(10,7) = 0;
C_body_quad(10,8) = 0;
C_body_quad(10,9) = 1;
C_body_quad(10,10) = 0;
C_body_quad(10,11) = 0;
C_body_quad(10,12) = 0;
C_body_quad(10,13) = 0;
D_body_quad(0,0) = 0;
D_body_quad(0,1) = 0;
D_body_quad(0,2) = 0;
D_body_quad(0,3) = 0;
D_body_quad(1,0) = 0;
D_body_quad(1,1) = 0;
D_body_quad(1,2) = 0;
D_body_quad(1,3) = 0;
D_body_quad(2,0) = 0;
D_body_quad(2,1) = 0;
D_body_quad(2,2) = 0;
D_body_quad(2,3) = 0;
D_body_quad(3,0) = 0;
D_body_quad(3,1) = 0;
D_body_quad(3,2) = 0;
D_body_quad(3,3) = 0;
D_body_quad(4,0) = 0;
D_body_quad(4,1) = 0;
D_body_quad(4,2) = 0;
D_body_quad(4,3) = 0;
D_body_quad(5,0) = 0;
D_body_quad(5,1) = 0;
D_body_quad(5,2) = 0;
D_body_quad(5,3) = 0;
D_body_quad(6,0) = 0;
D_body_quad(6,1) = 0;
D_body_quad(6,2) = 0;
D_body_quad(6,3) = 0;
D_body_quad(7,0) = 0;
D_body_quad(7,1) = 0;
D_body_quad(7,2) = 0;
D_body_quad(7,3) = 0;
D_body_quad(8,0) = 0;
D_body_quad(8,1) = 0;
D_body_quad(8,2) = 0;
D_body_quad(8,3) = 0;
D_body_quad(10,1) = 0;
D_body_quad(10,2) = 0;
D_body_quad(10,3) = 0;
D_body_quad(10,4) = 0;
