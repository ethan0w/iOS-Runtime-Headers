/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTag : NSObject <FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagProviding, FCTopicProviding> {
    NSArray * _allowedStorefrontIDs;
    NSString * _backgroundColorHexString;
    float  _bannerImageBaselineOffsetPercentage;
    FCTagBanner * _bannerImageForMask;
    FCTagBanner * _bannerImageForThemeBackground;
    FCTagBanner * _bannerImageForWhiteBackground;
    float  _bannerImageScale;
    NSArray * _blockedStorefrontIDs;
    long long  _contentProvider;
    NSString * _coverArticleListID;
    FCAssetHandle * _coverImageAssetHandle;
    FCHeadlineTemplate * _defaultHeadlineTemplate;
    NSString * _defaultSectionID;
    NTPBFeedConfiguration * _feedConfiguration;
    double  _forYouCutoffTime;
    unsigned int  _forYouMaximumArticleCount;
    NSString * _foregroundColorHexString;
    NSString * _groupTitleColorHexString;
    FCTextInfo * _headlineBylineTextInfo;
    FCTextInfo * _headlineExcerptTextInfo;
    FCTextInfo * _headlineTitleTextInfo;
    BOOL  _hideAccessoryText;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSString * _identifier;
    BOOL  _isDeprecated;
    BOOL  _isExplicitContent;
    BOOL  _isNotificationEnabled;
    BOOL  _isPublic;
    NSDate * _loadDate;
    FCAssetHandle * _logoImageAssetHandle;
    long long  _minimumNewsVersion;
    NSString * _name;
    FCAssetHandle * _nameImageAssetHandle;
    FCAssetHandle * _nameImageForDarkBackgroundAssetHandle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _nameImageForDarkBackgroundInsets;
    struct CGSize { 
        float width; 
        float height; 
    }  _nameImageForDarkBackgroundSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _nameImageInsets;
    FCAssetHandle * _nameImageMaskAssetHandle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _nameImageMaskInsets;
    struct CGSize { 
        float width; 
        float height; 
    }  _nameImageMaskSize;
    FCAssetHandle * _nameImageMaskWidgetHQAssetHandle;
    FCAssetHandle * _nameImageMaskWidgetLQAssetHandle;
    struct CGSize { 
        float width; 
        float height; 
    }  _nameImageSize;
    NSString * _parentID;
    NSArray * _pinnedArticleIDs;
    NSString * _pptFeedIDOverride;
    NSString * _primaryAudience;
    NSString * _publisherPaidAuthorizationURL;
    NSArray * _publisherPaidFeldsparablePurchaseIDs;
    BOOL  _publisherPaidLeakyPaywallOptOut;
    NSArray * _publisherPaidOfferableConfigurations;
    NSString * _publisherPaidVerificationURL;
    BOOL  _publisherPaidWebAccessOptIn;
    NSString * _publisherPaidWebAccessURL;
    NSArray * _relatedChannelIDs;
    NSArray * _relatedChannelIDsForOnboarding;
    NSArray * _relatedTopicIDs;
    NSArray * _relatedTopicIDsForOnboarding;
    NSString * _replacementID;
    long long  _score;
    NSArray * _sectionFeedConfigurations;
    NSArray * _sectionIDs;
    FCInterestToken * _tagInterestToken;
    NTPBTagRecord * _tagRecord;
    FCInterestToken * _tagRecordInterestToken;
    unsigned int  _tagType;
    NSString * _versionKey;
}

@property (nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) <FCChannelProviding> *asChannel;
@property (nonatomic, readonly) <FCSectionProviding> *asSection;
@property (nonatomic, readonly) <FCTopicProviding> *asTopic;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, copy) NSString *backgroundColorHexString;
@property (nonatomic) float bannerImageBaselineOffsetPercentage;
@property (nonatomic, readonly) FCTagBanner *bannerImageForMask;
@property (nonatomic, readonly) FCTagBanner *bannerImageForThemeBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForWhiteBackground;
@property (nonatomic) float bannerImageScale;
@property (nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) long long contentProvider;
@property (nonatomic, readonly, copy) NSString *coverArticleListID;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FCTagBanner *defaultBannerImage;
@property (nonatomic, readonly) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly, copy) NSString *defaultSectionID;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NTPBFeedConfiguration *feedConfiguration;
@property (nonatomic, readonly) int feedType;
@property (nonatomic, readonly) double forYouCutoffTime;
@property (nonatomic, readonly) unsigned int forYouMaximumArticleCount;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, copy) NSString *foregroundColorHexString;
@property (nonatomic, readonly) UIColor *groupTitleColor;
@property (nonatomic, copy) NSString *groupTitleColorHexString;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineExcerptTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineTitleTextInfo;
@property (nonatomic, readonly) BOOL hideAccessoryText;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BOOL isBlockedExplicitContent;
@property (nonatomic, readonly) BOOL isDeprecated;
@property (nonatomic, readonly) BOOL isExplicitContent;
@property (nonatomic, readonly) BOOL isNotificationEnabled;
@property (nonatomic, readonly) BOOL isPublic;
@property (nonatomic, readonly) BOOL isSubscribable;
@property (nonatomic, readonly) BOOL isWhite;
@property (nonatomic, readonly) BOOL isWhitelisted;
@property (nonatomic, retain) NSDate *loadDate;
@property (nonatomic, readonly) NSArray *loadableFonts;
@property (nonatomic, readonly) FCAssetHandle *logoImageAssetHandle;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } nameImageForDarkBackgroundInsets;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } nameImageForDarkBackgroundSize;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } nameImageInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskAssetHandle;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } nameImageMaskInsets;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } nameImageMaskSize;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } nameImageSize;
@property (nonatomic, readonly, copy) NSString *parentID;
@property (nonatomic, readonly) NSArray *pinnedArticleIDs;
@property (nonatomic, copy) NSString *pptFeedIDOverride;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic, readonly) BOOL publisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property (nonatomic, readonly, copy) NSString *publisherPaidVerificationURL;
@property (nonatomic, readonly) BOOL publisherPaidWebAccessOptIn;
@property (nonatomic, readonly, copy) NSString *publisherPaidWebAccessURL;
@property (nonatomic, readonly) NSArray *relatedChannelIDs;
@property (nonatomic, readonly) NSArray *relatedChannelIDsForOnboarding;
@property (nonatomic, readonly) NSArray *relatedTopicIDs;
@property (nonatomic, readonly) NSArray *relatedTopicIDsForOnboarding;
@property (nonatomic, readonly, copy) NSString *replacementID;
@property (nonatomic, readonly) long long score;
@property (nonatomic, copy) NSArray *sectionFeedConfigurations;
@property (nonatomic, readonly, copy) NSArray *sectionIDs;
@property (nonatomic, readonly) int statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsNotifications;
@property (nonatomic, retain) FCInterestToken *tagInterestToken;
@property (nonatomic, readonly) NTPBTagRecord *tagRecord;
@property (nonatomic, readonly) FCInterestToken *tagRecordInterestToken;
@property (nonatomic, readonly) unsigned int tagType;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;
@property (nonatomic, readonly, copy) NSString *versionKey;

- (void).cxx_destruct;
- (id)_feedConfigurationForSection:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1 withVersion:(int)arg2;
- (void)_inflateFromVersionlessJSONDictionary:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)asChannel;
- (id)asSection;
- (id)asTopic;
- (id)authorizationURL;
- (id)backgroundColor;
- (id)backgroundColorHexString;
- (float)bannerImageBaselineOffsetPercentage;
- (id)bannerImageForMask;
- (id)bannerImageForThemeBackground;
- (id)bannerImageForWhiteBackground;
- (float)bannerImageScale;
- (id)blockedStorefrontIDs;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticleListID;
- (id)coverImageAssetHandle;
- (id)data;
- (id)defaultBannerImage;
- (id)defaultHeadlineTemplate;
- (id)defaultSectionID;
- (id)description;
- (id)feedConfiguration;
- (id)feedIDForBin:(int)arg1;
- (int)feedType;
- (double)forYouCutoffTime;
- (unsigned int)forYouMaximumArticleCount;
- (id)foregroundColor;
- (id)foregroundColorHexString;
- (id)freeFeedIDForBin:(int)arg1;
- (id)freeFeedIDForSection:(id)arg1 bin:(int)arg2;
- (id)groupTitleColor;
- (id)groupTitleColorHexString;
- (unsigned int)hash;
- (id)headlineBylineTextInfo;
- (id)headlineExcerptTextInfo;
- (id)headlineTitleTextInfo;
- (BOOL)hideAccessoryText;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)identifier;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3;
- (id)initForTestingWithTagType:(unsigned int)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)initWithData:(id)arg1 context:(id)arg2;
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;
- (id)initWithTagType:(unsigned int)arg1 identifier:(id)arg2 name:(id)arg3;
- (BOOL)isAuthenticationSetup;
- (BOOL)isBlockedExplicitContent;
- (BOOL)isDeprecated;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1;
- (BOOL)isExplicitContent;
- (BOOL)isNoLongerAvailable;
- (BOOL)isNotificationEnabled;
- (BOOL)isPublic;
- (BOOL)isPurchaseSetup;
- (BOOL)isSubscribable;
- (BOOL)isWhite;
- (BOOL)isWhitelisted;
- (id)loadDate;
- (id)loadableFonts;
- (id)logoImageAssetHandle;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameImageAssetHandle;
- (id)nameImageForDarkBackgroundAssetHandle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { float x1; float x2; })nameImageForDarkBackgroundSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })nameImageInsets;
- (id)nameImageMaskAssetHandle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })nameImageMaskInsets;
- (struct CGSize { float x1; float x2; })nameImageMaskSize;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (struct CGSize { float x1; float x2; })nameImageSize;
- (id)paidFeedIDForBin:(int)arg1;
- (id)paidFeedIDForSection:(id)arg1 bin:(int)arg2;
- (id)parentID;
- (id)pinnedArticleIDs;
- (id)pptFeedIDOverride;
- (void)ppt_overrideFeedID:(id)arg1;
- (id)primaryAudience;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (BOOL)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidOfferableConfigurations;
- (id)publisherPaidVerificationURL;
- (BOOL)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1;
- (id)relatedChannelIDs;
- (id)relatedChannelIDsForOnboarding;
- (id)relatedTopicIDs;
- (id)relatedTopicIDsForOnboarding;
- (id)replacementID;
- (long long)score;
- (id)sectionFeedConfigurations;
- (id)sectionIDs;
- (void)setBackgroundColorHexString:(id)arg1;
- (void)setBannerImageBaselineOffsetPercentage:(float)arg1;
- (void)setBannerImageScale:(float)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setForegroundColorHexString:(id)arg1;
- (void)setGroupTitleColorHexString:(id)arg1;
- (void)setLoadDate:(id)arg1;
- (void)setPptFeedIDOverride:(id)arg1;
- (void)setSectionFeedConfigurations:(id)arg1;
- (void)setTagInterestToken:(id)arg1;
- (int)statusBarStyle;
- (BOOL)supportsNotifications;
- (id)tagInterestToken;
- (id)tagRecord;
- (id)tagRecordInterestToken;
- (unsigned int)tagType;
- (id)theme;
- (id)versionKey;

@end
