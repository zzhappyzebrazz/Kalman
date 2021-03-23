#ifndef kalman_h
#define kalman_h

float KalmanFilter(float mea_e, float est_e, float q);
float updateEstimate(float mea);
void setMeasurementError(float mea_e);
void setEstimateError(float est_e);
void setProcessNoise(float q);
float getKalmanGain();
float getEstimateError();

#endif