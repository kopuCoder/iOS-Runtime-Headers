/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeInfo : NSObject <NSCopying> {
    id /* block */  __numberOfPhotosProvider;
    int  _numberOfPhotos;
    int  _style;
}

@property (setter=_setNumberOfPhotosProvider:, nonatomic, copy) id /* block */ _numberOfPhotosProvider;
@property (setter=_setNumberOfPhotos:, nonatomic) int numberOfPhotos;
@property (setter=_setStyle:, nonatomic) int style;

+ (id)badgeInfoWithBurstStyleNumberOfPhotos:(int)arg1;
+ (id)badgeInfoWithBurstStyleNumberOfPhotosProvider:(id /* block */)arg1;
+ (id)badgeInfoWithHDRPhotoIrisStyle;
+ (id)badgeInfoWithHDRStyle;
+ (id)badgeInfoWithPhotoIrisStyle;
+ (id)badgeInfoWithSDOFPhotoIrisStyle;
+ (id)badgeInfoWithSDOFStyle;

- (void).cxx_destruct;
- (id /* block */)_numberOfPhotosProvider;
- (void)_setNumberOfPhotos:(int)arg1;
- (void)_setNumberOfPhotosProvider:(id /* block */)arg1;
- (void)_setStyle:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)numberOfPhotos;
- (int)style;

@end
