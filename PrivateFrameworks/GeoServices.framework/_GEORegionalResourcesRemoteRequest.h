/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList;

@interface _GEORegionalResourcesRemoteRequest : NSObject  {
    GEOTileKeyList *_list;
    unsigned long long _handle;
    struct __CFRunLoop { } *_runLoop;
}

@property(readonly) GEOTileKeyList * list;
@property(readonly) unsigned long long handle;
@property(readonly) struct __CFRunLoop { }* runLoop;


- (void)dealloc;
- (id)initWithList:(id)arg1 handle:(unsigned long long)arg2 runLoop:(struct __CFRunLoop { }*)arg3;
- (unsigned long long)handle;
- (id)list;
- (struct __CFRunLoop { }*)runLoop;

@end
