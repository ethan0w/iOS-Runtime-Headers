/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface RouteRoadInfo : NSObject  {
    NSString *_name;
    NSString *_shieldGroup;
    struct { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
}

@property(readonly) NSString * name;
@property(readonly) NSString * shieldGroup;
@property(readonly) struct { unsigned int x1; float x2; } routeOffset;


- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct { unsigned int x1; float x2; })arg3;
- (struct { unsigned int x1; float x2; })routeOffset;
- (id)shieldGroup;
- (id)name;
- (id).cxx_construct;
- (void)dealloc;

@end
