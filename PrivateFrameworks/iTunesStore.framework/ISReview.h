/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;

@interface ISReview : NSObject <NSCoding, NSCopying> {
    int _assetType;
    NSString *_body;
    unsigned int _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    BOOL _nicknameIsConfirmed;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned int _titleMaxLength;
}

@property(readonly) BOOL hasSavedDraft;
@property(retain) NSString * body;
@property(retain) NSString * nickname;
@property float rating;
@property(retain) NSString * title;
@property int assetType;
@property unsigned long long itemIdentifier;
@property(retain) NSURL * infoURL;
@property(retain) NSURL * submitURL;
@property unsigned int bodyMaxLength;
@property BOOL nicknameIsConfirmed;
@property unsigned int nicknameMaxLength;
@property unsigned int titleMaxLength;


- (void)setNicknameIsConfirmed:(BOOL)arg1;
- (BOOL)hasSavedDraft;
- (unsigned int)nicknameMaxLength;
- (unsigned int)titleMaxLength;
- (BOOL)nicknameIsConfirmed;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2;
- (BOOL)removeDraft;
- (BOOL)restoreFromDraft;
- (BOOL)saveAsDraft;
- (unsigned int)bodyMaxLength;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setAssetType:(int)arg1;
- (void)loadFromDictionary:(id)arg1;
- (void)setTitleMaxLength:(unsigned int)arg1;
- (void)setSubmitURL:(id)arg1;
- (id)submitURL;
- (void)setNicknameMaxLength:(unsigned int)arg1;
- (void)setBodyMaxLength:(unsigned int)arg1;
- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)assetType;
- (void)setBody:(id)arg1;
- (id)body;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)setInfoURL:(id)arg1;
- (id)infoURL;
- (void)setRating:(float)arg1;
- (float)rating;

@end
