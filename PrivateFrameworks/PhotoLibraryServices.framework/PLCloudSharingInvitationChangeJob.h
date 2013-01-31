/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSString, NSArray;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob  {
    NSString *_albumGUID;
    NSArray *_MSASSharingRelationships;
    int _relationshipChangeType;
    NSDictionary *_mstreamdInfoDictionary;
    NSString *_resendInvitationGUID;
    int _jobType;
}

@property(retain) NSArray * MSASSharingRelationships;
@property int relationshipChangeType;
@property(retain) NSString * albumGUID;
@property(retain) NSString * resendInvitationGUID;
@property int jobType;
@property(retain) NSDictionary * mstreamdInfoDictionary;

+ (void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(int)arg2 info:(id)arg3;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(int)arg2 info:(id)arg3;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1;

- (id)description;
- (void)dealloc;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (id)resendInvitationGUID;
- (int)relationshipChangeType;
- (id)MSASSharingRelationships;
- (void)setResendInvitationGUID:(id)arg1;
- (void)setRelationshipChangeType:(int)arg1;
- (void)setMSASSharingRelationships:(id)arg1;
- (void)setAlbumGUID:(id)arg1;
- (void)setJobType:(int)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (int)jobType;
- (id)mstreamdInfoDictionary;
- (id)albumGUID;
- (BOOL)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)run;

@end
