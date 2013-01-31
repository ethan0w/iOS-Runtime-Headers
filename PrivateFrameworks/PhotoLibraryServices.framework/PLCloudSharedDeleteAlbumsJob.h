/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob  {
    NSArray *_albumCloudGUIDsToDelete;
}

@property(retain) NSArray * albumCloudGUIDsToDelete;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;

- (id)description;
- (void)dealloc;
- (void)setAlbumCloudGUIDsToDelete:(id)arg1;
- (id)albumCloudGUIDsToDelete;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)run;

@end
