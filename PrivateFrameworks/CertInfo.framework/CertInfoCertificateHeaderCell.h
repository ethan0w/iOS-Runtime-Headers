/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UILabel, CertInfoGradientLabel, UIImage;

@interface CertInfoCertificateHeaderCell : UITableViewCell  {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}


- (id)_subtitleLabel;
- (void)dealloc;
- (id)_notTrustedGradient;
- (id)_certificateImage;
- (void)setExpired:(BOOL)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (id)_trustedLabel;
- (id)_titleLabel;
- (float)rowHeight;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
