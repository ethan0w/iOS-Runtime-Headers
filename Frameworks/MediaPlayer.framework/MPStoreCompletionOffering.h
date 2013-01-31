/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSDictionary, MPStoreLinkCompletionOffering, MPStoreCollectionCompletionOffering;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
    int _preferredStoreOfferVariant;
    NSDictionary *_responseCollectionDictionary;
    MPMediaQuery *_localItemsQuery;
    MPStoreCollectionCompletionOffering *_purchaseableCollectionOffering;
    MPStoreLinkCompletionOffering *_linkOffering;
}

@property int preferredStoreOfferVariant;
@property(readonly) MPStoreLinkCompletionOffering * linkOffering;
@property(retain) MPStoreCollectionCompletionOffering * purchaseableCollectionOffering;

+ (id)offeringWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;
+ (void)setDefaultOfferVariant:(int)arg1;
+ (int)defaultOfferVariant;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)linkOffering;
- (int)preferredStoreOfferVariant;
- (void)setPreferredStoreOfferVariant:(int)arg1;
- (id)purchaseableCollectionOffering;
- (id)copyByInvalidatingCalculatedContent;
- (void)setPurchaseableCollectionOffering:(id)arg1;
- (id)_getPurchaseableCollectionOffering;
- (id)initWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;

@end
