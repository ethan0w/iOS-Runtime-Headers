/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKRouteMapMatchingDataSource>, VKOriginalRouteMapMatchingDataSource;

@interface VKAttributedRoute : VKPolylineOverlay  {
    VKOriginalRouteMapMatchingDataSource *_originalRouteMapMatchingDataSource;
    <VKRouteMapMatchingDataSource> *_routeLineMapMatchingDataSource;
}

@property <VKRouteMapMatchingDataSource> * routeLineMapMatchingDataSource;
@property(readonly) struct { unsigned int x1; float x2; } start;
@property(readonly) struct { unsigned int x1; float x2; } end;

+ (id)attributedRouteWithRoute:(id)arg1;

- (void)setRouteLineMapMatchingDataSource:(id)arg1;
- (id)routeLineMapMatchingDataSource;
- (struct { double x1; double x2; })locationAtDistance:(double)arg1 from:(id)arg2;
- (id)projectedTunnelMatchUpToDistance:(double)arg1 from:(id)arg2 overTime:(double)arg3;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopBeforeNextManeuver:(BOOL)arg3;
- (struct { double x1; double x2; })locationForRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1;
- (id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1 onDate:(id)arg2;
- (id)findClosestCoordinateAlongRouteForLocation:(id)arg1 prevRouteMatch:(id)arg2 onDate:(id)arg3;
- (id)_routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopBeforeNextManeuver:(BOOL)arg4 atDate:(id)arg5;
- (struct { double x1; double x2; double x3; })pointForRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)_findClosestCoordinateAlongRouteForLocation:(id)arg1 prevRouteMatch:(id)arg2 useCLMatchedLocation:(BOOL)arg3 onDate:(id)arg4;
- (id)_findClosestCoordinateAlongSectionsFromDataSource:(id)arg1 forLocation:(id)arg2 useCLMatchedLocation:(BOOL)arg3 prevRouteMatch:(id)arg4 onDate:(id)arg5;
- (id)_originalRouteMapMatchingDataSourceAroundPoint:(struct { double x1; double x2; double x3; })arg1;
- (id)_setupRouteMatchWithRawLocation:(id)arg1 previousMatch:(id)arg2 onDate:(id)arg3 distanceFromRoute:(double)arg4 coordinate:(struct { unsigned int x1; float x2; })arg5 matchedPoint:(struct { double x1; double x2; double x3; })arg6 matchedCourse:(double)arg7 stepIndex:(unsigned int)arg8 isGoodMatch:(BOOL)arg9;
- (struct { unsigned int x1; float x2; })_bestMatchToPolylineSectionFrom:(id)arg1 point:(const struct { double x1; double x2; double x3; }*)arg2 useCLMatchedLocation:(BOOL)arg3 bounds:(const struct { double x1; double x2; double x3; double x4; }*)arg4 points:(const struct Vertex { struct { float x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; float x3; struct { /* ? */ } *x4; unsigned char x5; BOOL x6; float x7; }*)arg5 pointCount:(unsigned int)arg6 distanceLeftToSearch:(double*)arg7 prevRouteMatch:(id)arg8 bestDistance:(double*)arg9 bestPoint:(struct { double x1; double x2; double x3; }*)arg10 bestMatchedCourse:(double*)arg11 bestMatchLooksGood:(BOOL*)arg12 bestStepIndex:(unsigned int*)arg13 stopLooking:(BOOL*)arg14;
- (double)_courseAt:(unsigned int)arg1;
- (struct { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 segA:(const struct Vertex { struct { float x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; float x3; struct { /* ? */ } *x4; unsigned char x5; BOOL x6; float x7; }*)arg2 segB:(const struct Vertex { struct { float x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; float x3; struct { /* ? */ } *x4; unsigned char x5; BOOL x6; float x7; }*)arg3 pointOnSegment:(struct { float x1; float x2; })arg4 bounds:(const struct { double x1; double x2; double x3; double x4; }*)arg5;
- (struct { double x1; double x2; double x3; })_pointOnOriginalRouteForRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (struct { unsigned int x1; float x2; })routeCoordinateAtDistanceAlongOriginalRoute:(double)arg1 from:(struct { unsigned int x1; float x2; })arg2;
- (struct { unsigned int x1; float x2; })makeRouteCoordinateFromPointIndex:(unsigned int)arg1 offset:(float)arg2;
- (id)initWithRoute:(id)arg1;
- (void)dealloc;
- (struct { unsigned int x1; float x2; })end;
- (struct { unsigned int x1; float x2; })start;

@end
