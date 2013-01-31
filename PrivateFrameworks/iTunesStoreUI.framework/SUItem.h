/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, SSItemImageCollection, SSItemOffer, SUItemContentRating, SUItemReviewStatistics, NSDate, NSDictionary, SUItemLink, NSArray, SUItem, NSString, NSNumber;

@interface SUItem : NSObject <NSCopying> {
    NSString *_artistName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_collectionName;
    SUItem *_containerItem;
    NSString *_containerName;
    SUItemContentRating *_contentRating;
    NSString *_copyrightString;
    SSItemOffer *_defaultStoreOffer;
    NSDictionary *_dictionary;
    NSString *_disclaimerString;
    BOOL _gameCenterEnabled;
    NSString *_genreName;
    NSString *_humanReadableDescription;
    BOOL _isInstalled;
    int _itemDisplayType;
    unsigned long long _itemIdentifier;
    SSItemImageCollection *_itemImageCollection;
    NSArray *_itemLinks;
    NSString *_itemMediaKind;
    int _itemType;
    NSDate *_releaseDate;
    NSString *_releaseDateString;
    int _representedItemCount;
    SUItemReviewStatistics *_reviewStatistics;
    NSString *_secondaryTitle;
    NSString *_softwareType;
    NSArray *_storeOffers;
    NSDictionary *_tellAFriendDictionary;
    NSString *_title;
    NSDictionary *_tweetDictionary;
    NSString *_unmodifiedTitle;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property(copy) SUItemContentRating * contentRating;
@property(retain) SUItem * containerItem;
@property(copy) NSString * humanReadableDescription;
@property(getter=isDownloadable,readonly) BOOL downloadable;
@property int itemDisplayType;
@property unsigned long long itemIdentifier;
@property(copy) NSString * itemMediaKind;
@property int itemType;
@property(retain) NSDate * releaseDate;
@property(copy) SUItemReviewStatistics * reviewStatistics;
@property(copy) NSString * secondaryTitle;
@property(copy) NSString * title;
@property(copy) NSString * unmodifiedTitle;
@property(copy) NSString * artistName;
@property(copy) NSString * collectionName;
@property(copy) NSString * containerName;
@property(copy) NSString * copyrightString;
@property(copy) NSString * disclaimerString;
@property(copy) NSString * genreName;
@property int representedItemCount;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleVersion;
@property(getter=isInstalled,readonly) BOOL installed;
@property(getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;
@property(readonly) SUItemLink * externalArtistPageLink;
@property(copy) NSArray * itemLinks;
@property(readonly) SSItemOffer * defaultStoreOffer;
@property(copy) NSArray * storeOffers;
@property(readonly) NSString * tellAFriendBody;
@property(readonly) NSString * tellAFriendBodyMIMEType;
@property(readonly) NSURL * tellAFriendBodyURL;
@property(readonly) NSString * tellAFriendSubject;
@property(readonly) NSString * tweetInitialText;
@property(readonly) NSURL * tweetURL;
@property(copy) SSItemImageCollection * itemImageCollection;
@property(readonly) NSDictionary * itemDictionary;
@property(readonly) NSString * itemTypeString;


- (void)setVersionOrdering:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setUnmodifiedTitle:(id)arg1;
- (id)storeOffers;
- (void)setSoftwareType:(id)arg1;
- (void)setReviewStatistics:(id)arg1;
- (void)setRepresentedItemCount:(int)arg1;
- (int)representedItemCount;
- (void)setReleaseDate:(id)arg1;
- (void)setItemMediaKind:(id)arg1;
- (void)setItemDisplayType:(int)arg1;
- (int)itemDisplayType;
- (void)setHumanReadableDescription:(id)arg1;
- (void)setGenreName:(id)arg1;
- (id)genreName;
- (void)setGameCenterEnabled:(BOOL)arg1;
- (BOOL)isGameCenterEnabled;
- (void)setDisclaimerString:(id)arg1;
- (id)disclaimerString;
- (void)setCopyrightString:(id)arg1;
- (id)copyrightString;
- (void)setContainerName:(id)arg1;
- (id)containerName;
- (void)setCollectionName:(id)arg1;
- (id)collectionName;
- (id)tweetURL;
- (id)tweetInitialText;
- (id)tellAFriendSubject;
- (id)tellAFriendBodyURL;
- (id)tellAFriendBodyMIMEType;
- (id)tellAFriendBody;
- (id)relatedItemsForRelationType:(id)arg1;
- (int)integerValueForProperty:(id)arg1;
- (id)externalArtistPageLink;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (void)setStoreOffers:(id)arg1;
- (void)_reloadItemLinks;
- (void)_reloadItemImages;
- (void)_reloadImagesAndLinksFromSquishes:(id)arg1;
- (void)_reloadStoreOffers;
- (id)_newItemLinkWithType:(int)arg1 URLKey:(id)arg2 titleKey:(id)arg3;
- (id)_newItemLinkWithType:(int)arg1 dictionary:(id)arg2;
- (id)_newPrimaryItemLink;
- (void)setItemLinks:(id)arg1;
- (void)setItemImageCollection:(id)arg1;
- (id)_squishImageForSquishDictionary:(id)arg1;
- (id)storeOfferForIdentifier:(id)arg1;
- (int)_linkTypeForString:(id)arg1;
- (int)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (void)_reloadDefaultStoreOffer;
- (id)versionOrdering;
- (id)unmodifiedTitle;
- (id)containerItem;
- (id)itemDictionary;
- (id)itemMediaKind;
- (void)setItemType:(int)arg1;
- (BOOL)isDisplayable:(id*)arg1;
- (id)firstItemLinkForType:(int)arg1;
- (id)versionIdentifier;
- (id)softwareType;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (id)dateValueForProperty:(id)arg1;
- (id)stringValueForProperty:(id)arg1;
- (id)reviewStatistics;
- (id)humanReadableDescription;
- (BOOL)boolValueForProperty:(id)arg1;
- (id)itemLinksForType:(int)arg1;
- (int)itemType;
- (id)itemLinks;
- (void)setContainerItem:(id)arg1;
- (id)itemTypeString;
- (id)defaultStoreOffer;
- (id)itemImageCollection;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)valueForProperty:(id)arg1;
- (void)_reloadProperties;
- (id)initWithDictionary:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)itemIdentifier;
- (BOOL)isDownloadable;
- (id)releaseDate;
- (void)setArtistName:(id)arg1;
- (BOOL)isInstalled;
- (id)bundleVersion;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (id)artistName;
- (void)setSecondaryTitle:(id)arg1;
- (id)secondaryTitle;

@end
