/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSNumber, NSSet, CLLocation, NSString, NSURL, NSDate, NSArray;

@interface PLSyncSaveJob : NSObject  {
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    BOOL isVideo;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    BOOL isSyncComplete;
}

@property(retain) NSURL * originalAssetURL;
@property BOOL isVideo;
@property(copy) NSString * uuid;
@property(copy) NSDate * creationDate;
@property(copy) NSDate * modificationDate;
@property(copy) NSSet * albumURIs;
@property(copy) CLLocation * location;
@property(retain) NSArray * facesInfo;
@property(retain) NSNumber * sortToken;
@property BOOL isSyncComplete;


- (void)setLocation:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setIsSyncComplete:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setFacesInfo:(id)arg1;
- (void)setAlbumURIs:(id)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (id)albumURIs;
- (id)facesInfo;
- (void)processFacesWithBlock:(id)arg1;
- (id)sortToken;
- (id)originalAssetURL;
- (BOOL)isSyncComplete;
- (void)setSortToken:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (id)uuid;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (BOOL)isVideo;
- (id)location;
- (id)modificationDate;

@end
