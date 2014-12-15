var gulp = require('gulp'),
    gutil = require('gulp-util'),
    notify = require('gulp-notify'),
    jshint = require('gulp-jshint'),
    sass = require('gulp-sass'),
    autoprefixer = require('gulp-autoprefixer'),
    minifycss = require('gulp-minify-css'),
    rename = require('gulp-rename'),
    uglify = require('gulp-uglify'),
    concat = require('gulp-concat'),
    shell = require('gulp-shell'),
    stylish = require('jshint-stylish');


gulp.task('build-images', function() {
  return gulp.src(['../tedxlausanne-styleguide/assets/img/**'])
          .pipe(gulp.dest('drupal/sites/all/themes/tedxlausanne/assets/img'));
});

gulp.task('fonts', function() {
  return gulp.src(['../tedxlausanne-styleguide/build/fonts/**'])
          .pipe(gulp.dest('drupal/sites/all/themes/tedxlausanne/assets/fonts'));
});

gulp.task('scripts', function() {
  return gulp.src(['../tedxlausanne-styleguide/build/js/**'])
          .pipe(concat('main.js'))
          .pipe(gulp.dest('drupal/sites/all/themes/tedxlausanne/assets/js'));
  // gulp.src('../tedxlausanne-styleguide/assets/js/*.js')
  //   .pipe(jshint())
  //   .pipe(jshint.reporter('jshint-stylish'))
  //   .pipe(concat('main.js'))
  //   .pipe(gulp.dest('drupal/sites/all/themes/tedxlausanne/assets/js'))
});

gulp.task('styles', function() {
  return gulp.src('../tedxlausanne-styleguide/assets/sass/style.scss')
    .pipe(sass())
      .on('error', gutil.beep)
      .on('error', notify.onError("Error: <%= error.message %>"))
    .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'Firefox >= 15'))
    .pipe(minifycss())
    .pipe(rename('style.min.css'))
    .pipe(gulp.dest('drupal/sites/all/themes/tedxlausanne/assets/css'));
});

gulp.task('default', ['styles', 'scripts', 'build-images', 'fonts']);