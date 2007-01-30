
#ifndef TONGUEFINDER_INC
#define TONGUEFINDER_INC

#include <yarp/os/all.h>
#include <yarp/sig/all.h>
#include <yarp/sig/GlutOrientation.h>
#include <deque>

class Point { 
public:
  double x, y;
  
  Point(double x, double y) : x(x), y(y) {}
};


class TongueFinder {
private:
  double xglob, yglob;
  double dxglob, dyglob;
  bool globSet;

  int ct;
  double peak;
  double t;
  yarp::sig::ImageOf<yarp::sig::PixelRgb> part;
  yarp::sig::ImageOf<yarp::sig::PixelFloat> dx, dy, mag, work;
  yarp::sig::GlutOrientation orient;
  std::deque<Point> prevTongue;

public:
  TongueFinder() : orient("data/orient.txt") {
    t = 0;
    peak = 0;
    ct = 0;
    globSet = false;
    xglob = yglob = 0;
    dxglob = dyglob = 0;
  }

  void process(yarp::sig::ImageOf<yarp::sig::PixelRgb>& image, 
	       yarp::sig::ImageOf<yarp::sig::PixelRgb>& out);
};



#endif


